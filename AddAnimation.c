
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CModelInstance::AddAnimation(long,unsigned long,float,long,float) */

void __thiscall
CModelInstance::AddAnimation
          (CModelInstance *this,long param_1,ulong param_2,float param_3,long param_4,float param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  float fVar9;
  char *local_4;
  
                    /* 0x15f2e0  953  ?AddAnimation@CModelInstance@@QAEXJKMJM@Z */
  fVar2 = _DAT_36223384 / param_5;
  if (((param_2 & 2) == 0) || (iVar3 = IsAnimationPlaying(this,param_1), iVar3 == 0)) {
    if ((param_2 & 8) == 0) {
      if ((param_2 & 0x10) != 0) {
        NewClonedState(this,0.2);
      }
    }
    else {
      NewClearState(this,0.2);
    }
    iVar3 = FUN_36035f40((int)(this + 0xbc));
    if (iVar3 == 0) {
      NewClearState(this,0.0);
    }
    iVar3 = FUN_36035f40((int)(this + 0xbc));
    iVar3 = *(int *)(this + 0xc0) + -0x18 + iVar3 * 0x18;
    puVar5 = (undefined4 *)(iVar3 + 8);
    iVar7 = *(int *)(iVar3 + 0x10) + 1;
    *(int *)(iVar3 + 0x10) = iVar7;
    if ((param_2 & 0x20) == 0) {
      iVar7 = *(int *)(iVar3 + 0x10);
      iVar4 = FUN_36036080(puVar5);
      if (iVar4 < iVar7) {
        iVar7 = FUN_36036080(puVar5);
        FUN_36036480(puVar5,iVar7 + *(int *)(iVar3 + 0x14));
      }
      iVar7 = FUN_36035f50((int)puVar5);
      iVar7 = iVar7 + -1;
      if (0 < iVar7) {
        iVar4 = iVar7 * 0x20;
        do {
          puVar5 = (undefined4 *)(iVar4 + *(int *)(iVar3 + 0xc));
          if ((int)puVar5[-1] <= param_4) break;
          iVar7 = iVar7 + -1;
          iVar4 = iVar4 + -0x20;
          puVar8 = puVar5 + -8;
          for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar5 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 1;
          }
        } while (0 < iVar7);
      }
      puVar5 = (undefined4 *)(iVar7 * 0x20 + *(int *)(iVar3 + 0xc));
      puVar5[3] = fVar2;
      puVar5[4] = param_1;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = *(undefined4 *)(_pTimer + 0xc);
      puVar5[5] = param_2;
      puVar5[6] = param_3;
      puVar5[7] = param_4;
    }
    else {
      iVar4 = FUN_36036080(puVar5);
      if (iVar4 < iVar7) {
        iVar7 = FUN_36036080(puVar5);
        FUN_36036480(puVar5,iVar7 + *(int *)(iVar3 + 0x14));
      }
      puVar5 = (undefined4 *)(*(int *)(iVar3 + 0x10) * 0x20 + -0x20 + *(int *)(iVar3 + 0xc));
      puVar5[3] = fVar2;
      puVar5[4] = param_1;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = *(undefined4 *)(_pTimer + 0xc);
      puVar5[6] = param_3;
      puVar5[5] = param_2;
      puVar5[7] = param_4;
    }
    *(long *)(this + 0x110) = param_1;
    fVar1 = *(float *)(_pTimer + 0xc);
    *(float *)(this + 0x114) = fVar1;
    fVar9 = GetAnimLength(this,param_1,0);
    *(float *)(this + 0x118) = fVar9 * fVar2 + fVar1;
    GetCurrentAnimName(this);
    StringFree(local_4);
  }
  else if ((param_2 & 1) != 0) {
    AddFlagsToPlayingAnim(this,param_1,1);
    return;
  }
  return;
}

