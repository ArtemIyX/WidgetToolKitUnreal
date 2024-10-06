// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.

#pragma once

#include "CoreMinimal.h"
#include "ToolkitTextBlock.h"
#include "TitleText.generated.h"

/**
 * 
 */
UCLASS()
class WIDGETTOOLKIT_API UTitleText : public UToolkitTextBlock
{
	GENERATED_BODY()

public:
	UTitleText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
};
