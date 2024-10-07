// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.


#include "Widgets/Buttons/ToolkitButton.h"

#include "Settings/WidgetToolkitSettings.h"

UToolkitButton::UToolkitButton(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer), MainButton(nullptr)
{
}

void UToolkitButton::NativePreConstruct()
{
	Super::NativePreConstruct();
	if (IsValid(MainButton))
	{
		MainButton->SetStyle(GetDefault<UWidgetToolkitSettings>()->ButtonStyle);
	}
}

void UToolkitButton::NativeConstruct()
{
	Super::NativeConstruct();
	if (IsValid(MainButton))
	{
		MainButton->OnClicked.AddDynamic(this, &UToolkitButton::OnButtonClicked);
		MainButton->OnPressed.AddDynamic(this, &UToolkitButton::OnButtonPressed);
		MainButton->OnReleased.AddDynamic(this, &UToolkitButton::OnButtonReleased);
		MainButton->OnHovered.AddDynamic(this, &UToolkitButton::OnButtonHovered);
		MainButton->OnUnhovered.AddDynamic(this, &UToolkitButton::OnButtonUnHovered);
	}
}

void UToolkitButton::NativeDestruct()
{
	if (IsValid(MainButton))
	{
		MainButton->OnClicked.RemoveAll(this);
		MainButton->OnPressed.RemoveAll(this);
		MainButton->OnReleased.RemoveAll(this);
		MainButton->OnHovered.RemoveAll(this);
		MainButton->OnUnhovered.RemoveAll(this);
	}
	Super::NativeDestruct();
}

void UToolkitButton::OnButtonClicked()
{
	OnClicked.Broadcast();
	BP_OnButtonClicked();
}

void UToolkitButton::OnButtonPressed()
{
	OnPressed.Broadcast();
	BP_OnButtonPressed();
}

void UToolkitButton::OnButtonReleased()
{
	OnReleased.Broadcast();
	BP_OnButtonReleased();
}

void UToolkitButton::OnButtonHovered()
{
	OnHovered.Broadcast();
	BP_OnButtonHovered();
}

void UToolkitButton::OnButtonUnHovered()
{
	OnUnhovered.Broadcast();
	BP_OnButtonUnHovered();
}
