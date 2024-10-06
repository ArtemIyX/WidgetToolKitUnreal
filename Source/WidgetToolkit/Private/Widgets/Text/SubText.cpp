// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.


#include "Widgets/Text/SubText.h"

#include "Settings/WidgetToolkitSettings.h"

USubText::USubText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
	Font = GetDefault<UWidgetToolkitSettings>()->Subtitle;
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
}
