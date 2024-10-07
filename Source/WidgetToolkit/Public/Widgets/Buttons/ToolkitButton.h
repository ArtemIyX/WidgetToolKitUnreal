// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "ToolkitButton.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class WIDGETTOOLKIT_API UToolkitButton : public UUserWidget
{
	GENERATED_BODY()

public:
	UToolkitButton(const FObjectInitializer& ObjectInitializer);
protected:
	
public:
	virtual void NativePreConstruct() override;
	
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

protected:
	UFUNCTION()
	void OnButtonClicked();
	UFUNCTION()
	void OnButtonPressed();
	UFUNCTION()
	void OnButtonReleased();
	UFUNCTION()
	void OnButtonHovered();
	UFUNCTION()
	void OnButtonUnHovered();

	UFUNCTION(BlueprintImplementableEvent, Category="ToolkitButton", DisplayName="Button Clicked")
	void BP_OnButtonClicked();

	UFUNCTION(BlueprintImplementableEvent, Category="ToolkitButton", DisplayName="Button Pressed")
	void BP_OnButtonPressed();

	UFUNCTION(BlueprintImplementableEvent, Category="ToolkitButton", DisplayName="Button Released")
	void BP_OnButtonReleased();

	UFUNCTION(BlueprintImplementableEvent, Category="ToolkitButton", DisplayName="Button Hovered")
	void BP_OnButtonHovered();

	UFUNCTION(BlueprintImplementableEvent, Category="ToolkitButton", DisplayName="Button UnHovered")
	void BP_OnButtonUnHovered();
	
public:
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(BindWidget))
	UButton* MainButton;

	/** Called when the button is clicked */
	UPROPERTY(BlueprintAssignable, Category="ToolkitButton|Event")
	FOnButtonClickedEvent OnClicked;

	/** Called when the button is pressed */
	UPROPERTY(BlueprintAssignable, Category="ToolkitButton|Event")
	FOnButtonPressedEvent OnPressed;

	/** Called when the button is released */
	UPROPERTY(BlueprintAssignable, Category="ToolkitButton|Event")
	FOnButtonReleasedEvent OnReleased;

	UPROPERTY(BlueprintAssignable, Category = "ToolkitButton|Event")
	FOnButtonHoverEvent OnHovered;

	UPROPERTY(BlueprintAssignable, Category = "ToolkitButton|Event")
	FOnButtonHoverEvent OnUnhovered;
};
