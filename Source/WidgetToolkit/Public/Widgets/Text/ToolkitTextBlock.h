// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.

#pragma once

#include "CoreMinimal.h"
#include "Components/TextBlock.h"
#include "ToolkitTextBlock.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class WIDGETTOOLKIT_API UToolkitTextBlock : public UTextBlock
{
	GENERATED_BODY()

public:
	UToolkitTextBlock(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
