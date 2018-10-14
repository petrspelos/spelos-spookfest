#include <iostream>

using namespace std;

float RandFloat(float min, float max);
int RandInt(int min, int max);
bool StringContains(string hayStack, string needle);
string StringSub(string asString, int alStar, int alCoun);
int StringToInt(string asString);
float StringToFloat(string asString);
bool StringToBool(string asString);
float MathSin(float afX);
float MathCos(float afX);
float MathTan(float afX);
float MathAsin(float afX);
float MathAcos(float afX);
float MathAtan(float afX);
float MathAtan2(float afX, float afY);
float MathSqrt(float afX);
float MathPow(float afBase, float afExp);
float MathMin(float afA, float afB);
float MathMax(float afA, float afB);
float MathClamp(float afX, float afMin, float afMax);
float MathAbs(float afX);
void Print (string asString);
void AddDebugMessage(string asString, bool abCheckForDuplicates);
void ProgLog(string asLevel, string asMessage);
bool ScriptDebugOn();
void SetLocalVarInt(string asName, int alVal);
void AddLocalVarInt(string asName, int alVal);
int GetLocalVarInt(string asName);
void SetLocalVarFloat(string asName, float afVal);
void AddLocalVarFloat(string asName, float afVal);
float GetLocalVarFloat(string asName);
void SetLocalVarString(string asName, string asVal);
void AddLocalVarString(string asName, string asVal);
string GetLocalVarString(string asName);
void SetGlobalVarInt(string asName, int alVa);
void AddGlobalVarInt(string asName, int alVa);
int GetGlobalVarInt(string asName);
void SetGlobalVarFloat(string asName, float afVal);
void AddGlobalVarFloat(string asName, float afVal);
float GetGlobalVarFloat(string asName);
void SetGlobalVarString(string asName, string asVal);
void AddGlobalVarString(string asName, string asVal);
string GetGlobalVarString(string asName);
void PreloadParticleSystem(string asPSFile);
void CreateParticleSystemAtEntity(string asPSName, string asPSFil, string asEntity, bool abSavePS);
void CreateParticleSystemAtEntityExt(string asPSName, string asPSFil, string asEntity, bool abSavePS, float afR, float afG, float afB, float afA, bool abFadeAtDistance, float afFadeMinEnd, float afFadeMinStart, float afFadeMaxStart, float afFadeMaxEnd);
void DestroyParticleSystem(string asName);
void PreloadSound(string asSoundFile);
void PlaySoundAtEntity(string asSoundName, string asSoundFile, string asEntity, float afFadeTime, bool abSaveSound);
void FadeInSound(string asSoundName, float afFadeTime, bool abPlayStart);
void StopSound(string asSoundName, float afFadeTime);
void PlayMusic(string asMusicFile, bool abLoop, float afVolume, float afFadeTime, int alPrio, bool abResume);
void StopMusic(float afFadeTime, int alPrio);
void FadeGlobalSoundVolume(float afDestVolume, float afTime);
void FadeGlobalSoundSpeed(float afDestSpeed, float afTime);
void SetLightVisible(string asLightName, bool abVisible);
void FadeLightTo(string asLightName, float afR, float afG, float afB, float afA, float afRadius, float afTime);
void SetLightFlickerActive(string asLightName, bool abActive);
void StartCredits(string asMusic, bool abLoopMusic, string asTextCat, string asTextEntry, int alEndNum);
void StartDemoEnd();
void AutoSave();
void CheckPoint (string asName, string asStartPos, string asCallback, string asDeathHintCat, string asDeathHintEntry);
void ChangeMap(string asMapName, string asStartPos, string asStartSound, string asEndSound);
void ClearSavedMaps();
void CreateDataCache();
void DestroyDataCache();
void SetMapDisplayNameEntry(string asNameEntry);
void SetSkyBoxActive(bool abActive);
void SetSkyBoxTexture(string asTexture);
void SetSkyBoxColor(float afR, float afG, float afB, float afA);
void SetFogActive(bool abActive);
void SetFogColor(float afR, float afG, float afB, float afA);
void SetFogProperties(float afStart, float afEnd, float afFalloffExp, bool abCulling);
void SetupLoadScreen(string TextCat, string TextEntry, int alRandomNum, string ImageFile);
void AddTimer(string asName, float afTime, string asFunction);
void RemoveTimer(string asName);
float GetTimerTimeLeft(string asName);
void FadeOut(float afTime);
void FadeIn(float afTime);
void FadeImageTrailTo(float afAmount, float afSpeed);
void FadeSepiaColorTo(float afAmount, float afSpeed);
void FadeRadialBlurTo(float afSize, float afSpeed);
void SetRadialBlurStartDist(float afStartDist);
void StartEffectFlash(float afFadeIn, float afWhite, float afFadeOut);
void StartEffectEmotionFlash(string asTextCat, string asTextEntry, string asSound);
void AddEffectVoice(string asVoiceFile, string asEffectFile, string asTextCat, string asTextEntry, bool abUsePosition, string asPosEntity, float afMinDistance, float afMaxDistance);
void StopAllEffectVoices(float afFadeOutTime);
bool GetEffectVoiceActive();
void SetEffectVoiceOverCallback(string asFunc);
bool GetFlashbackIsActive();
void StartPlayerSpawnPS(string asSPSFile);
void StopPlayerSpawnPS();
void PlayGuiSound(string asSoundFile, float afVolume);
void StartScreenShake(float afAmount, float afTime, float afFadeInTime, float afFadeOutTime);
void SetInDarknessEffectsActive(bool abX);
void SetInsanitySetEnabled(string asSet, bool abX);
void StartInsanityEvent(string asEventName);
void StartRandomInsanityEvent();
void StopCurrentInsanityEvent();
bool InsanityEventIsActive();
void SetPlayerActive(bool abActive);
void ChangePlayerStateToNormal();
void SetPlayerCrouching(bool abCrouch);
void AddPlayerBodyForce(float afX, float afY, float afZ, bool abUseLocalCoords);
void ShowPlayerCrossHairIcons(bool abX);
void SetPlayerSanity(float afSanity);
void AddPlayerSanity(float afSanity);
float GetPlayerSanity();
void SetPlayerHealth(float afHealth);
void AddPlayerHealth(float afHealth);
float GetPlayerHealth();
void SetPlayerLampOil(float afOil);
void AddPlayerLampOil(float afOil);
float GetPlayerLampOil();
float GetPlayerSpeed();
float GetPlayerYSpeed();
void SetSanityDrainDisabled(bool abX);
void GiveSanityBoost();
void GiveSanityBoostSmall();
void GiveSanityDamage(float afAmount, bool abUseEffect);
void GivePlayerDamage(float afAmount, string asType, bool abSpinHead, bool abLethal);
void FadePlayerFOVMulTo(float afX, float afSpeed);
void FadePlayerAspectMulTo(float afX, float afSpeed);
void FadePlayerRollTo(float afX, float afSpeedMul, float afMaxSpeed);
void MovePlayerHeadPos(float afX, float afY, float afZ, float afSpeed, float afSlowDownDist);
void StartPlayerLookAt(string asEntityName, float afSpeedMul, float afMaxSpeed, string asAtTargetCallback);
void StopPlayerLookAt();
void SetPlayerMoveSpeedMul(float afMul);
void SetPlayerRunSpeedMul(float afMul);
void SetPlayerLookSpeedMul(float afMul);
void SetPlayerJumpForceMul(float afMul);
void SetPlayerJumpDisabled(bool abX);
void SetPlayerCrouchDisabled(bool abX);
void TeleportPlayer(string asStartPosName);
void SetLanternActive(bool abX, bool abUseEffects);
bool GetLanternActive();
void SetLanternDisabled(bool abX);
void SetLanternLitCallback(string asCallback);
void SetMessage(string asTextCategory, string asTextEntry, float afTime);
void SetDeathHint(string asTextCategory, string asTextEntry);
void DisableDeathStartSound();
void MovePlayerForward(float afAmount);
void SetPlayerFallDamageDisabled(bool abX);
void SetPlayerPos(float afX, float afY, float afZ);
float GetPlayerPosX();
float GetPlayerPosY();
float GetPlayerPosZ();
void AddNote(string asNameAndTextEntry, string asImage);
void AddDiary(string asNameAndTextEntry, string asImage);
void ReturnOpenJournal(bool abOpenJournal);
void AddQuest(string asName, string asNameAndTextEntry);
void CompleteQuest(string asName, string asNameAndTextEntry);
bool QuestIsCompleted(string asName);
bool QuestIsAdded(string asName);
void SetNumberOfQuestsInMap(int alNumberOfQuests);
void GiveHint (string asName, string asMessageCat, string asMessageEntry, float afTimeShown);
void RemoveHint (string asName);
void BlockHint (string asName);
void UnBlockHint (string asName);
void ExitInventory();
void SetInventoryDisabled(bool abX);
void SetInventoryMessage(string asTextCategory, string asTextEntry, float afTime);
void GiveItem(string asName, string asType, string asSubTypeName, string asImageName, float afAmount);
void RemoveItem(string asName);
bool HasItem(string asName);
void GiveItemFromFile(string asName, string asFileName);
void AddCombineCallback(string asName, string asItemA, string asItemB, string asFunction, bool abAutoRemove);
void RemoveCombineCallback(string asName);
void AddUseItemCallback(string asName, string asItem, string asEntity, string asFunction, bool abAutoDestroy);
void RemoveUseItemCallback(string asName);
void SetEntityActive(string asName, bool abActive);
void SetEntityVisible(string asName, bool abVisible);
bool GetEntityExists(string asName);
void SetEntityCustomFocusCrossHair(string asName, string asCrossHair);
void CreateEntityAtArea(string asEntityName, string asEntityFile, string asAreaName, bool abFullGameSave);
void ReplaceEntity(string asName, string asBodyName, string asNewEntityName, string asNewEntityFile, bool abFullGameSave);
void PlaceEntityAtEntity(string asName, string asTargetEntity, string asTargetBodyName, bool abUseRotation);
void SetEntityPos(string asName, float afX, float afY, float afZ);
float GetEntityPosX(string asName);
float GetEntityPosY(string asName);
float GetEntityPosZ(string asName);
void SetEntityPlayerLookAtCallback(string asName, string asCallbacK, bool abRemoveWhenLookedAt);
void SetEntityPlayerInteractCallback(string asName, string asCallback, bool abRemoveOnInteraction);
void SetEntityCallbackFunc(string asName, string asCallback);
void SetEntityConnectionStateChangeCallback(string asName, string asCallback);
void SetEntityInteractionDisabled(string asName, bool abDisabled);
void BreakJoint (string asName);
void AddEntityCollideCallback(string asParentName, string asChildName, string asFunction, bool abDeleteOnCollide, int alStates);
void RemoveEntityCollideCallback(string asParentName, string asChildName);
bool GetEntitiesCollide(string asEntityA, string asEntityB);
void SetBodyMass(string asName, float afMass);
float GetBodyMass(string asName);
void SetPropEffectActive(string asName, bool abActive, bool abFadeAndPlaySounds);
void SetPropActiveAndFade(string asName, bool abActive, float afFadeTime);
void SetPropStaticPhysics(string asName, bool abX);
bool GetPropIsInteractedWith(string asName);
void RotatePropToSpeed(string asName, float afAcc, float afGoalSpeed, float afAxisX, float afAxisY, float afAxisZ, bool abResetSpeed, string asOffsetArea);
void StopPropMovement(string asName);
void AddAttachedPropToProp(string asPropName, string asAttachName, string asAttachFile, float afPosX, float afPosY, float afPosZ, float afRotX, float afRotY, float afRotZ);
void AttachPropToProp(string asPropName, string asAttachName, string asAttachFile, float afPosX, float afPosY, float afPosZ, float afRotX, float afRotY, float afRotZ);
void RemoveAttachedPropFromProp(string asPropName, string asAttachName);
void SetPropHealth(string asName, float afHealth);
void AddPropHealth(string asName, float afHealth);
float GetPropHealth(string asName);
void ResetProp(string asName);
void PlayPropAnimation(string asProp, string asAnimation, float afFadeTime, bool abLoop, string asCallback);
void AddPropForce(string asName, float afX, float afY, float afZ, string asCoordSystem);
void AddPropImpulse(string asName, float afX, float afY, float afZ, string asCoordSystem);
void AddBodyForce(string asName, float afX, float afY, float afZ, string asCoordSystem);
void AddBodyImpulse(string asName, float afX, float afY, float afZ, string asCoordSystem);
void InteractConnectPropWithRope(string asName, string asPropName, string asRopeName, bool abInteractOnly, float afSpeedMul, float afToMinSpeed, float afToMaxSpeed, bool abInvert, int alStatesUsed);
void InteractConnectPropWithMoveObject(string asName, string asPropName, string asMoveObjectName, bool abInteractOnly, bool abInvert, int alStatesUsed);
void ConnectEntities(string asName, string asMainEntity, string asConnectEntity, bool abInvertStateSent, int alStatesUsed, string asCallbackFunc);
void SetLampLit(string asName, bool abLit, bool abEffects);
void SetSwingDoorLocked(string asName, bool abLocked, bool abEffects);
void SetSwingDoorClosed(string asName, bool abClosed, bool abEffects);
bool GetSwingDoorLocked(string asName);
bool GetSwingDoorClosed(string asName);
void SetSwingDoorDisableAutoClose(string asName, bool abDisableAutoClose);
int GetSwingDoorState(string asName);
void SetLevelDoorLocked(string asName, bool abLocked);
void SetLevelDoorLockedSound(string asName, string asSound);
void SetLevelDoorLockedText(string asName, string asTextCat, string asTextEntry);
void SetMoveObjectState(string asName, float afState);
void SetMoveObjectStateExt(string asName, float afState, float afAcc, float afMaxSpeed, float afSlowdownDist, bool abResetSpeed);
void SetPropObjectStuckState(string asName, int alState);
void SetWheelStuckState(string asName, int alState, bool abEffects);
void SetLeverStuckState(string asName, int alState, bool abEffects);
void SetWheelAngle(string asName, float afAngle, bool abAutoMove);
void SetWheelInteractionDisablesStuck(string asName, bool abX);
void SetLeverInteractionDisablesStuck(string asName, bool abX);
int GetLeverState(string asName);
void SetMultiSliderStuckState(string asName, int alStuckState, bool abEffects);
void SetMultiSliderCallback(string asName, string asCallback);
void SetButtonSwitchedOn(string asName, bool abSwitchedOn, bool abEffects);
void SetAllowStickyAreaAttachment(bool abX);
void AttachPropToStickyArea(string asAreaName, string asProp);
void AttachBodyToStickyArea(string asAreaName, string asBody);
void DetachFromStickyArea(string asAreaName);
void SetNPCAwake(string asName, bool abAwake, bool abEffects);
void SetNPCFollowPlayer(string asName, bool abX);
void SetEnemyDisabled(string asName, bool abDisabled);
void SetEnemyIsHallucination(string asName, bool abX);
void FadeEnemyToSmoke(string asName, bool abPlaySound);
void ShowEnemyPlayerPosition(string asName);
void AlertEnemyOfPlayerPresence(string asName);
void SetEnemyDisableTriggers(string asName, bool abX);
void AddEnemyPatrolNode(string asName, string asNodeName, float afWaitTime, string asAnimation);
void ClearEnemyPatrolNodes(string asEnemyName);
void SetEnemySanityDecreaseActive(string asName, bool abX);
void TeleportEnemyToNode(string asEnemyName, string asNodeName, bool abChangeY);
void TeleportEnemyToEntity(string asEnemyName, string asTargetEntity, string asTargetBody, bool abChangeY);
void ChangeManPigPose(string asName, string asPoseType);
void SetTeslaPigFadeDisabled(string asName, bool abX);
void SetTeslaPigSoundDisabled(string asName, bool abX);
void SetTeslaPigEasyEscapeDisabled(string asName, bool abX);
void ForceTeslaPigSighting(string asName);
string GetEnemyStateName(string asName);