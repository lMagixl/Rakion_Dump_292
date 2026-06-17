
/* void __cdecl SE_EndEngine(void) */

void __cdecl SE_EndEngine(void)

{
  void *pvVar1;
  CConsole *pCVar2;
  CInput *pCVar3;
  CShell *pCVar4;
  CTimer *pCVar5;
  CGfxLibrary *pCVar6;
  CSoundLibrary *pCVar7;
  CProfileForm *pCVar8;
  CStock_CAnimData *pCVar9;
  CStock_CAnimSet *pCVar10;
  CStock_CEntityClass *pCVar11;
  CStock_CFontData *pCVar12;
  CStock_CMesh *pCVar13;
  CStock_CModelData *pCVar14;
  CStock_CModelInstance *pCVar15;
  CStock_CShader *pCVar16;
  CStock_CSkeleton *pCVar17;
  CStock_CSoundData *pCVar18;
  CStock_CTextureData *pCVar19;
  CProfileForm *pCVar20;
  
                    /* 0x9470  3184  ?SE_EndEngine@@YAXXZ */
  FUN_36187c10();
  CStock_CFontData::Release(_pFontStock,_pfdDisplayFont);
  CStock_CFontData::Release(_pFontStock,_pfdConsoleFont);
  CStock_CFontData::Release(_pFontStock,_pfdGulimFont);
  pCVar11 = _pEntityClassStock;
  _pfdDisplayFont = (CFontData *)0x0;
  _pfdConsoleFont = (CFontData *)0x0;
  _pfdGulimFont = (CFontData *)0x0;
  if (_pEntityClassStock != (CStock_CEntityClass *)0x0) {
    FUN_360e7d60((int *)_pEntityClassStock);
    operator_delete(pCVar11);
  }
  pCVar15 = _pModelInstanceStock;
  _pEntityClassStock = (CStock_CEntityClass *)0x0;
  if (_pModelInstanceStock != (CStock_CModelInstance *)0x0) {
    FUN_360ec2b0((int *)_pModelInstanceStock);
    operator_delete(pCVar15);
  }
  pCVar14 = _pModelStock;
  _pModelInstanceStock = (CStock_CModelInstance *)0x0;
  if (_pModelStock != (CStock_CModelData *)0x0) {
    FUN_360eb1a0((int *)_pModelStock);
    operator_delete(pCVar14);
  }
  pCVar18 = _pSoundStock;
  _pModelStock = (CStock_CModelData *)0x0;
  if (_pSoundStock != (CStock_CSoundData *)0x0) {
    FUN_360ef7d0((int *)_pSoundStock);
    operator_delete(pCVar18);
  }
  pCVar12 = _pFontStock;
  _pSoundStock = (CStock_CSoundData *)0x0;
  if (_pFontStock != (CStock_CFontData *)0x0) {
    FUN_360e8f20((int *)_pFontStock);
    operator_delete(pCVar12);
  }
  pCVar15 = _pModelInstanceStock;
  _pFontStock = (CStock_CFontData *)0x0;
  if (_pModelInstanceStock != (CStock_CModelInstance *)0x0) {
    FUN_360ec2b0((int *)_pModelInstanceStock);
    operator_delete(pCVar15);
  }
  pCVar19 = _pTextureStock;
  _pModelInstanceStock = (CStock_CModelInstance *)0x0;
  if (_pTextureStock != (CStock_CTextureData *)0x0) {
    FUN_360f08e0((int *)_pTextureStock);
    operator_delete(pCVar19);
  }
  pCVar9 = _pAnimStock;
  _pTextureStock = (CStock_CTextureData *)0x0;
  if (_pAnimStock != (CStock_CAnimData *)0x0) {
    FUN_360e5970((int *)_pAnimStock);
    operator_delete(pCVar9);
  }
  pCVar13 = _pMeshStock;
  _pAnimStock = (CStock_CAnimData *)0x0;
  if (_pMeshStock != (CStock_CMesh *)0x0) {
    FUN_360ea0e0((int *)_pMeshStock);
    operator_delete(pCVar13);
  }
  pCVar17 = _pSkeletonStock;
  _pMeshStock = (CStock_CMesh *)0x0;
  if (_pSkeletonStock != (CStock_CSkeleton *)0x0) {
    FUN_360ee610((int *)_pSkeletonStock);
    operator_delete(pCVar17);
  }
  pCVar10 = _pAnimSetStock;
  _pSkeletonStock = (CStock_CSkeleton *)0x0;
  if (_pAnimSetStock != (CStock_CAnimSet *)0x0) {
    FUN_360e6d10((int *)_pAnimSetStock);
    operator_delete(pCVar10);
  }
  pCVar16 = _pShaderStock;
  _pAnimSetStock = (CStock_CAnimSet *)0x0;
  if (_pShaderStock != (CStock_CShader *)0x0) {
    FUN_360ed470((int *)_pShaderStock);
    operator_delete(pCVar16);
  }
  _pShaderStock = (CStock_CShader *)0x0;
  FUN_36022cd0();
  if (_pNetwork != (CNetworkLibrary *)0x0) {
    (*(code *)**(undefined4 **)_pNetwork)(1);
    _pNetwork = (CNetworkLibrary *)0x0;
  }
  pCVar3 = _pInput;
  if (_pInput != (CInput *)0x0) {
    CInput::~CInput(_pInput);
    operator_delete(pCVar3);
  }
  pCVar7 = _pSound;
  _pInput = (CInput *)0x0;
  if (_pSound != (CSoundLibrary *)0x0) {
    CSoundLibrary::~CSoundLibrary(_pSound);
    operator_delete(pCVar7);
  }
  pCVar6 = _pGfx;
  _pSound = (CSoundLibrary *)0x0;
  if (_pGfx != (CGfxLibrary *)0x0) {
    CGfxLibrary::~CGfxLibrary(_pGfx);
    operator_delete(pCVar6);
  }
  pCVar5 = _pTimer;
  _pGfx = (CGfxLibrary *)0x0;
  if (_pTimer != (CTimer *)0x0) {
    CTimer::~CTimer(_pTimer);
    operator_delete(pCVar5);
  }
  pCVar4 = _pShell;
  _pTimer = (CTimer *)0x0;
  if (_pShell != (CShell *)0x0) {
    CShell::~CShell(_pShell);
    operator_delete(pCVar4);
  }
  pCVar2 = _pConsole;
  _pShell = (CShell *)0x0;
  if (_pConsole != (CConsole *)0x0) {
    FUN_36021d30((CTCriticalSection *)_pConsole);
    operator_delete(pCVar2);
  }
  _pConsole = (CConsole *)0x0;
  FUN_3603dcf0();
  FUN_3603bb30((int *)&_sfStats);
  pCVar8 = _pfNetworkProfile;
  pCVar20 = _pfNetworkProfile + 0x10;
  if (*(int *)(_pfNetworkProfile + 0x10) != 0) {
    pvVar1 = *(void **)(_pfNetworkProfile + 0x14);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,8,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3600bb40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)pCVar20 = 0;
    *(undefined4 *)(pCVar8 + 0x14) = 0;
  }
  pCVar8 = _pfNetworkProfile;
  pCVar20 = _pfNetworkProfile + 0x18;
  if (*(int *)(_pfNetworkProfile + 0x18) != 0) {
    pvVar1 = *(void **)(_pfNetworkProfile + 0x1c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x20,*(int *)((int)pvVar1 + -4),FUN_3600bb50);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)pCVar20 = 0;
    *(undefined4 *)(pCVar8 + 0x1c) = 0;
  }
  pCVar8 = _pfWorldEditingProfile;
  pCVar20 = _pfWorldEditingProfile + 0x10;
  if (*(int *)(_pfWorldEditingProfile + 0x10) != 0) {
    pvVar1 = *(void **)(_pfWorldEditingProfile + 0x14);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar1,8,*(int *)((int)pvVar1 + -4),(_func_void_void_ptr *)&LAB_3600bb40);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)pCVar20 = 0;
    *(undefined4 *)(pCVar8 + 0x14) = 0;
  }
  pCVar8 = _pfWorldEditingProfile;
  pCVar20 = _pfWorldEditingProfile + 0x18;
  if (*(int *)(_pfWorldEditingProfile + 0x18) != 0) {
    pvVar1 = *(void **)(_pfWorldEditingProfile + 0x1c);
    if (pvVar1 != (void *)0x0) {
      _eh_vector_destructor_iterator_(pvVar1,0x20,*(int *)((int)pvVar1 + -4),FUN_3600bb50);
      operator_delete__((void *)((int)pvVar1 + -4));
    }
    *(undefined4 *)pCVar20 = 0;
    *(undefined4 *)(pCVar8 + 0x1c) = 0;
  }
  IFeel_DeleteDevice();
  CloseExceptionHandler();
  FUN_36023bf0();
  return;
}

