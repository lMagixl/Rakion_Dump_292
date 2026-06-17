
/* public: void __thiscall CSessionState::RemovePlayer(unsigned char) */

void __thiscall CSessionState::RemovePlayer(CSessionState *this,uchar param_1)

{
  int iVar1;
  
                    /* 0x111b10  3139  ?RemovePlayer@CSessionState@@QAEXE@Z */
  iVar1 = (uint)param_1 * 0x100;
  if (*(int *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + iVar1) != 0) {
    (**(code **)(**(int **)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + iVar1 + 4) + 0x1c8))();
    FUN_361090d0((undefined4 *)(*(int *)(*(int *)(_pNetwork + 0x18) + 0x10) + iVar1));
    *(undefined4 *)(this + 0x68) = 1;
    CEntity::HandleSentEvents();
    *(undefined4 *)(this + 0x68) = 0;
    iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    *(undefined4 *)(iVar1 + 0x48a4 + (uint)param_1 * 4) = 0;
    RemoveAllGeneralNpcs(this,param_1);
  }
  return;
}

