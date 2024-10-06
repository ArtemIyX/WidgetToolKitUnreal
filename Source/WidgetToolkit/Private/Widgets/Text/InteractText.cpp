// © Artem Podorozhko. All Rights Reserved. This project, including all associated assets, code, and content, is the property of Artem Podorozhko. Unauthorized use, distribution, or modification is strictly prohibited.


#include "Widgets/Text/InteractText.h"

#include "Settings/WidgetToolkitSettings.h"

UInteractText::UInteractText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PRAGMA_DISABLE_DEPRECATION_WARNINGS
Font = GetDefault<UWidgetToolkitSettings>()->Interact;
	PRAGMA_ENABLE_DEPRECATION_WARNINGS
}
