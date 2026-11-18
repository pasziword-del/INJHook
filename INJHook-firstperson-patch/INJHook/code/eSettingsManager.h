#pragma once
#include <Windows.h>

// as usual, pluginmh/mugenhook

struct eMouseSettings {
	int sens;
	bool invert_y;
	bool invert_x;
};


class eSettingsManager {
public:
	void Init();

	bool bEnable60FPSFrontend;
	bool bEnableConsoleWindow;
	bool bEnableGamepadSupport;

	int iHookMenuOpenKey;
	int iToggleSlowMoKey = VK_F5;
	int iResetStageInteractablesKey;

	// first person (modifier: VK_MENU = Alt, VK_SHIFT = Shift, VK_CONTROL = Ctrl, 0 = none)
	int iFPMenuKey = 'C';
	int iFPMenuModifier = VK_MENU;
	int iFPToggleKey = 'P';
	int iFPToggleModifier = VK_SHIFT;
	
	// free camera keys
	int iFreeCameraKeyXPlus;
	int iFreeCameraKeyXMinus;
	int iFreeCameraKeyYPlus;
	int iFreeCameraKeyYMinus;
	int iFreeCameraKeyZPlus;
	int iFreeCameraKeyZMinus;

	int iFreeCameraKeyYawPlus;
	int iFreeCameraKeyYawMinus;
	int iFreeCameraKeyPitchPlus;
	int iFreeCameraKeyPitchMinus;
	int iFreeCameraKeyRollPlus;
	int iFreeCameraKeyRollMinus;

	int iFreeCameraKeyFOVPlus;
	int iFreeCameraKeyFOVMinus;


	eMouseSettings mouse;

	float fMenuScale;

	void SaveSettings();
	void ResetKeys();

};

extern eSettingsManager* SettingsMgr;