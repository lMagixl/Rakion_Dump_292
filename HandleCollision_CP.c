
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CPonytail::HandleCollision_CP(long,float) */

void __thiscall CPonytail::HandleCollision_CP(CPonytail *this,long param_1,float param_2)

{
  CPonytail *this_00;
  int iVar1;
  CCollisionSphere *pCVar2;
  uint uVar3;
  CCollisionCapsule *pCVar4;
  CPonytail *this_01;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x18f860  2234  ?HandleCollision_CP@CPonytail@@QAEXJM@Z */
  if (_DAT_3623dbfc <= param_2) {
    this_00 = this + 0xc;
    local_30 = 0;
    iVar1 = FUN_361905c0(this_00,param_1);
    uVar7 = *(undefined4 *)(iVar1 + 4);
    uVar8 = *(undefined4 *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = FUN_361905c0(this_00,param_1);
    local_18 = *(undefined4 *)(iVar1 + 0x10);
    local_14 = *(undefined4 *)(iVar1 + 0x14);
    local_10 = *(undefined4 *)(iVar1 + 0x18);
    iVar6 = 0;
    iVar1 = FUN_361904a0((int)(this + 0xac));
    if (0 < iVar1) {
      do {
        pCVar2 = (CCollisionSphere *)FUN_361906e0(this + 0xac,iVar6);
        uVar3 = CCollisionSphere::BoundOut
                          (pCVar2,uVar7,uVar8,uVar5,local_18,local_14,local_10,param_2,&local_24,
                           &local_c);
        uVar5 = local_1c;
        uVar8 = local_20;
        uVar7 = local_24;
        local_30 = local_30 | uVar3;
        iVar6 = iVar6 + 1;
        iVar1 = FUN_361904a0((int)(this + 0xac));
      } while (iVar6 < iVar1);
    }
    this_01 = this + 0x98;
    iVar6 = 0;
    iVar1 = FUN_36190470((int)this_01);
    if (0 < iVar1) {
      do {
        pCVar4 = (CCollisionCapsule *)FUN_36190650(this_01,iVar6);
        uVar3 = CCollisionCapsule::BoundOut
                          (pCVar4,uVar7,uVar8,uVar5,local_18,local_14,local_10,param_2,&local_24,
                           &local_c);
        uVar5 = local_1c;
        uVar8 = local_20;
        uVar7 = local_24;
        local_30 = local_30 | uVar3;
        iVar6 = iVar6 + 1;
        iVar1 = FUN_36190470((int)this_01);
      } while (iVar6 < iVar1);
    }
    if (local_30 != 0) {
      iVar1 = FUN_361905c0(this_00,param_1);
      *(undefined4 *)(iVar1 + 4) = local_24;
      *(undefined4 *)(iVar1 + 8) = local_20;
      *(undefined4 *)(iVar1 + 0xc) = local_1c;
      iVar1 = FUN_361905c0(this_00,param_1);
      *(undefined4 *)(iVar1 + 0x10) = local_c;
      *(undefined4 *)(iVar1 + 0x14) = local_8;
      *(undefined4 *)(iVar1 + 0x18) = local_4;
    }
  }
  return;
}

