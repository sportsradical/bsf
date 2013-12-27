﻿using System.Runtime.CompilerServices;
using BansheeEngine;

namespace BansheeEditor
{
    public sealed class EditorGUI : GUIBase
    {
        internal EditorGUI(ModalWindow parentWindow)
        {
            Internal_CreateInstance(this, parentWindow);
        }

        [MethodImpl(MethodImplOptions.InternalCall)]
        private static extern void Internal_CreateInstance(EditorGUI instance, ModalWindow parentWindow);
    }
}