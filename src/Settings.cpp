#include "Settings.h"


bool Settings::LoadSettings(const bool a_dumpParse)
{
	auto [log, success] = J2S::load_settings(FILE_NAME, a_dumpParse);

	if (!log.empty()) {
		logger::error("%s", log.c_str());
	}

	return success;
}


decltype(Settings::globalSpeedMult) Settings::globalSpeedMult("globalSpeedMult", 1.0f);
decltype(Settings::maxSpeed) Settings::maxSpeed("maxSpeed", 450.0f);
decltype(Settings::misttepAllowed) Settings::misttepAllowed("misstepAllowed", 4);

decltype(Settings::baseSpeedBoost) Settings::baseSpeedBoost("baseSpeedBoost", 1.0f);
decltype(Settings::baseSpeedMult) Settings::baseSpeedMult("baseSpeedMult", 1.0f);

decltype(Settings::minStrafeAngle) Settings::minStrafeAngle("minStrafeAngle", 35.0f);
decltype(Settings::maxStrafeAngle) Settings::maxStrafeAngle("maxStrafeAngle", 95.0f);
decltype(Settings::strafeDeadzone) Settings::strafeDeadzone("strafeDeadzone", 35.0f);
decltype(Settings::strafeSpeedMult) Settings::strafeSpeedMult("strafeSpeedMult", 0.5f);

decltype(Settings::minHeightLaunch) Settings::minHeightLaunch("minHeightLaunch", 140.0f);
decltype(Settings::heightLaunchMult) Settings::heightLaunchMult("heightLaunchMult", 0.5f);

decltype(Settings::crouchSpeedBoost) Settings::crouchSpeedBoost("crouchSpeedBoost", 32.0f);
decltype(Settings::crouchBoostMult) Settings::crouchBoostMult("crouchBoostMult", 1.0f);
decltype(Settings::crouchBoostCooldown) Settings::crouchBoostCooldown("crouchBoostCooldown", 6);


decltype(Settings::ramDamage) Settings::ramDamage("ramDamage", 5.0f);
decltype(Settings::ramDamageMult) Settings::ramDamageMult("ramDamageMult", 0.3f);
decltype(Settings::ramSpeedThreshold) Settings::ramSpeedThreshold("ramSpeedThreshold", 220.0f);
decltype(Settings::ramSpeedReduction) Settings::ramSpeedReduction("ramSpeedReduction", 0.5f);

decltype(Settings::enableJumpFeedback) Settings::enableJumpFeedback("enableJumpFeedback", true);
decltype(Settings::enableFovZoom) Settings::enableFovZoom("enableFovZoom", true);
decltype(Settings::enableTremble) Settings::enableTremble("enableTremble", false);