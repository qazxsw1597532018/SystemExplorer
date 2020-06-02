#include "stdafx.h"
#include "ProcessColor.h"

ProcessColor::ProcessColor(PCWSTR name, COLORREF defaultColor, COLORREF defaultTextColor, bool enabled) 
	: Name(name), DefaultColor(defaultColor), Color(defaultColor), 
	DefaultTextColor(defaultTextColor), TextColor(defaultTextColor), Enabled(enabled) {
}