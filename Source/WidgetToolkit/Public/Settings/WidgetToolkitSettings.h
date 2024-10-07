// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "WidgetToolkitSettings.generated.h"

/**
 * 
 */
UCLASS(Config=Game, meta=(DisplayName = "Widget Toolkit"))
class WIDGETTOOLKIT_API UWidgetToolkitSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UWidgetToolkitSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Fonts", Config)
	FSlateFontInfo Title;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Fonts", Config)
	FSlateFontInfo Body;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Fonts", Config)
	FSlateFontInfo Interact;
	
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Fonts", Config)
	FSlateFontInfo Subtitle;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category="Styles", Config)
	FButtonStyle ButtonStyle;
};
