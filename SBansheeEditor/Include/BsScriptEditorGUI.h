#pragma once

#include "BsScriptEditorPrerequisites.h"
#include "BsScriptObject.h"
#include "BsScriptGUIBase.h"

namespace BansheeEditor
{
	class BS_SCR_BED_EXPORT ScriptEditorGUI: public BS::ScriptGUIBase, public BS::ScriptObject<ScriptEditorGUI>
	{
	public:
		static void initMetaData();

	private:
		ScriptEditorGUI(BS::GUIWidget& widget, ScriptModalWindow* parentWindow);

		static void internal_createInstance(MonoObject* instance, MonoObject* parentModalWindow);
		static void internal_destroyInstance(ScriptEditorGUI* nativeInstance);

		static void initRuntimeData();
	};
}