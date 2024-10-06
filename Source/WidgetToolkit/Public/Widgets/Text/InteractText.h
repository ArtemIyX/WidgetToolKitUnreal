// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.

#pragma once

#include "CoreMinimal.h"
#include "ToolkitTextBlock.h"
#include "InteractText.generated.h"

/**
 * 
 */
UCLASS()
class WIDGETTOOLKIT_API UInteractText : public UToolkitTextBlock
{
	GENERATED_BODY()
	
public:
	UInteractText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
