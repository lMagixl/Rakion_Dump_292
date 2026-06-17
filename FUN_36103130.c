
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36103130(void *this,int param_1,CEntityMessage *param_2,float *param_3)

{
  float *pfVar1;
  CPlacement3D *pCVar2;
  float *pfVar3;
  int iVar4;
  CEntity *pCVar5;
  xEncryptMemory *this_00;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  pCVar5 = CWorld::EntityFromID((CWorld *)(_pNetwork + 0x11e4),*(ulong *)this);
  if (pCVar5 != (CEntity *)0x0) {
    iVar6 = param_1 * 0x34;
    *(float *)(iVar6 + 4 + (int)this) =
         CTimer::TickQuantum * *(float *)(_pTimer + 0x10) + *(float *)(_pTimer + 0xc);
    pfVar1 = (float *)((int)this + iVar6 + 8);
    *pfVar1 = *(float *)(pCVar5 + 0x3c);
    *(undefined4 *)((int)this + iVar6 + 0xc) = *(undefined4 *)(pCVar5 + 0x40);
    *(undefined4 *)((int)this + iVar6 + 0x10) = *(undefined4 *)(pCVar5 + 0x44);
    *(undefined4 *)((int)this + iVar6 + 0x14) = *(undefined4 *)(pCVar5 + 0x48);
    *(undefined4 *)((int)this + iVar6 + 0x18) = *(undefined4 *)(pCVar5 + 0x4c);
    *(undefined4 *)((int)this + iVar6 + 0x1c) = *(undefined4 *)(pCVar5 + 0x50);
    uVar7 = *(uint *)(pCVar5 + 0x254);
    uVar9 = 3;
    puVar8 = &local_30;
    this_00 = Xenesis2::Foundation::Memory::theEncryptMemory();
    FUN_3600cdd0(this_00,uVar7,puVar8,uVar9);
    pCVar2 = (CPlacement3D *)((int)this + iVar6 + 0x20);
    *(undefined4 *)pCVar2 = local_30;
    *(undefined4 *)((int)this + iVar6 + 0x24) = local_2c;
    *(undefined4 *)((int)this + iVar6 + 0x28) = local_28;
    pfVar3 = (float *)((int)this + iVar6 + 0x2c);
    *pfVar3 = *(float *)(pCVar5 + 0x138);
    *(undefined4 *)((int)this + iVar6 + 0x30) = *(undefined4 *)(pCVar5 + 0x13c);
    *(undefined4 *)((int)this + iVar6 + 0x34) = *(undefined4 *)(pCVar5 + 0x140);
    iVar4 = *(int *)(pCVar5 + 0xb8);
    if ((iVar4 != 0) && ((*(uint *)(iVar4 + 8) & 0x200) != 0)) {
      FUN_360a6680((void *)(iVar4 + 0x250),&local_54);
      *(float *)pCVar2 = local_54 + *(float *)pCVar2;
      *(float *)((int)this + iVar6 + 0x24) = local_50 + *(float *)((int)this + iVar6 + 0x24);
      *(float *)((int)this + iVar6 + 0x28) = local_4c + *(float *)((int)this + iVar6 + 0x28);
      iVar4 = *(int *)(pCVar5 + 0xb8);
      *pfVar3 = *(float *)(iVar4 + 0x138) + *pfVar3;
      *(float *)((int)this + iVar6 + 0x30) =
           *(float *)(iVar4 + 0x13c) + *(float *)((int)this + iVar6 + 0x30);
      *(float *)((int)this + iVar6 + 0x34) =
           *(float *)(iVar4 + 0x140) + *(float *)((int)this + iVar6 + 0x34);
    }
    if (ABS(*(float *)pCVar2) < _DAT_362a604c) {
      *(undefined4 *)pCVar2 = 0;
    }
    if (ABS(*(float *)((int)this + iVar6 + 0x24)) < _DAT_362a604c) {
      *(undefined4 *)((int)this + iVar6 + 0x24) = 0;
    }
    if (ABS(*(float *)((int)this + iVar6 + 0x28)) < _DAT_362a604c) {
      *(undefined4 *)((int)this + iVar6 + 0x28) = 0;
    }
    if (ABS(*pfVar3) < _DAT_362a604c) {
      *pfVar3 = 0.0;
    }
    if (ABS(*(float *)((int)this + iVar6 + 0x30)) < _DAT_362a604c) {
      *(undefined4 *)((int)this + iVar6 + 0x30) = 0;
    }
    if (ABS(*(float *)((int)this + iVar6 + 0x34)) < _DAT_362a604c) {
      *(undefined4 *)((int)this + iVar6 + 0x34) = 0;
    }
    local_3c = *(undefined4 *)((int)this + iVar6 + 0x14);
    local_38 = *(undefined4 *)((int)this + iVar6 + 0x18);
    local_34 = *(undefined4 *)((int)this + iVar6 + 0x1c);
    local_48 = *pfVar1 - *param_3;
    local_44 = *(float *)((int)this + iVar6 + 0xc) - param_3[1];
    local_40 = *(float *)((int)this + iVar6 + 0x10) - param_3[2];
    CEntityMessage::WritePlacement(param_2,this,(CPlacement3D *)&local_48,pCVar2);
  }
  return;
}

