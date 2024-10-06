// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.


#include "Widgets/Text/ToolkitTextBlock.h"

#include "Settings/WidgetToolkitSettings.h"

UToolkitTextBlock::UToolkitTextBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	Font = GetDefault<UWidgetToolkitSettings>()->Body;
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
}
