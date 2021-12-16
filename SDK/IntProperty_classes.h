// IntProperty CoreUObject.IntProperty
// Size: 0x00 (Inherited: 0x70)
struct UIntProperty : UNumericProperty {
	None GeneratedMaterials; // 0x30(0x10)
	None GeneratedMeshes; // 0x40(0x10)
	None GeneratedTextures; // 0x50(0x10)
	None ParameterDecorations; // 0xe8(0x10)
	None TextureReuseCache; // 0x108(0x50)
	None ReferencedMaterials; // 0x320(0x10)
	None PhysicsAssetsToMerge; // 0x3d0(0x10)
	None Materials; // 0x28(0x50)
	None Textures; // 0x78(0x50)
	None ReferenceSkeletalMesh; // 0x28(0x08)
	None ReferenceStaticMesh; // 0x30(0x08)
	None Relevancy; // 0x38(0x01)
	None bDisableTextureLayoutManagement; // 0x39(0x01)
	None ReferencedMaterials; // 0x40(0x10)
	None ImageProperties; // 0x50(0x10)
	None GroupNodeMap; // 0x60(0x50)
	None ContributingMorphTargets; // 0xb0(0x10)
	None MorphTargetReconstructionInfo; // 0xc0(0x10)
	None VersionId; // 0xd0(0x10)
	None ParameterProperties; // 0xe0(0x10)
	None ParameterUIDataMap; // 0x140(0x50)
	None StateUIDataMap; // 0x190(0x50)
	None PhysicsAssetsMap; // 0x1e0(0x50)
	None MaskOutCache; // 0x230(0x28)
	None bIsChildObject; // 0x258(0x01)
	None MaskOutCache_HardRef; // 0x260(0x08)
	None CustomizableObject; // 0x28(0x08)
	None SkeletalMesh; // 0x30(0x08)
	None BoolParameters; // 0x38(0x10)
	None IntParameters; // 0x48(0x10)
	None FloatParameters; // 0x58(0x10)
	None TextureParameters; // 0x68(0x10)
	None VectorParameters; // 0x78(0x10)
	None ProjectorParameters; // 0x88(0x10)
	None bBuildParameterDecorations; // 0x98(0x01)
	None UpdatedDelegate; // 0xa0(0x10)
	None SkeletalMeshStatus; // 0x110(0x10)
	None MaterialTags; // 0x140(0x10)
	None PrivateData; // 0x1d0(0x08)
	None Textures; // 0x28(0x10)
	None PendingReleaseSkeletalMesh; // 0x28(0x10)
	None PreviewExternalImageProvider; // 0x48(0x08)
	None ProtectedCachedTextures; // 0x150(0x10)
	None DefaultInstanceLODManagement; // 0x170(0x08)
	None CurrentInstanceLODManagement; // 0x178(0x08)
	None SkippedLastRenderTime; // 0x23c(0x04)
	None CustomizableObjectInstance; // 0x240(0x08)
	None CustomizableSkeletalComponent; // 0x398(0x08)
	None RenderingLogSeverity; // 0x28(0x01)
	None ShowWarningsOnScreen; // 0x29(0x01)
	None DeveloperOptions; // 0x30(0x10)
	None Texture; // 0x70(0x08)
	None UberGraphFrame; // 0x248(0x08)
	None Anim_HideKillAssist; // 0x250(0x08)
	None Anim_ShowAssist; // 0x258(0x08)
	None Anim_ShowKill; // 0x260(0x08)
	None T_AssistCount; // 0x268(0x08)
	None T_KillCount; // 0x270(0x08)
	None DefaultFontSize; // 0x278(0x04)
	None MiniFontSize; // 0x27c(0x04)
	None IsShowingKillCount; // 0x280(0x01)
	None Timer_HideKillCountText; // 0x288(0x08)
	None RemainTime; // 0x290(0x04)

	void UnloadMaskOutCache(); // UnloadMaskOutCache CustomizableObject.CustomizableObject.UnloadMaskOutCache // (Final|Native|Public|BlueprintCallable) // <Game+0x10384d0>
	void UpdateSkeletalMeshAsync(None bIgnoreCloseDist, None bForceHighPriority); // UpdateSkeletalMeshAsync CustomizableObject.CustomizableObjectInstance.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // <Game+0x10384f0>
	void SetReleaseMutableTexturesImmediately(None bReleaseTextures); // SetReleaseMutableTexturesImmediately CustomizableObject.CustomizableObjectSystem.SetReleaseMutableTexturesImmediately // (Final|Native|Public|BlueprintCallable) // <Game+0x103cb50>
	void UpdateSkeletalMeshAsync(None bNeverSkipUpdate); // UpdateSkeletalMeshAsync CustomizableObject.CustomizableSkeletalComponent.UpdateSkeletalMeshAsync // (Final|Native|Public|BlueprintCallable) // <Game+0x103cbe0>
	void DelegatedCallback(None Instance); // DelegatedCallback CustomizableObject.InstanceUpdatedHelper.DelegatedCallback // (Final|Native|Public) // <Game+0x103c930>
	void SetHideTimer(); // SetHideTimer UW-MyKillCountMessageWidget.UW-MyKillCountMessageWidget_C.SetHideTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <Game+0x23ad490>
	void ExecuteUbergraph(None EntryPoint); // ExecuteUbergraph CoreUObject.Object.ExecuteUbergraph // (Event|Public|BlueprintEvent) // <Game+0x23ad490>
};

