// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.

#pragma once

#include "CoreMinimal.h"
#include "ToolkitTextBlock.h"
#include "BodyText.generated.h"

/**
 * 
 */
UCLASS()
class WIDGETTOOLKIT_API UBodyText : public UToolkitTextBlock
{
	GENERATED_BODY()

public:
	UBodyText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
