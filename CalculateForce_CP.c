
/* public: class Vector<float,3> __thiscall CPonytail::CalculateForce_CP(long) */

void __thiscall CPonytail::CalculateForce_CP(CPonytail *this,long param_1)

{
  CPonytail *this_00;
  int iVar1;
  int iVar2;
  CDynParticle *pCVar3;
  int iVar4;
  int in_stack_00000008;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* 0x18edd0  1130  ?CalculateForce_CP@CPonytail@@QAE?AV?$Vector@M$02@@J@Z */
  if (in_stack_00000008 == 0) {
    *(undefined4 *)param_1 = 0;
    return;
  }
  this_00 = this + 0xc;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  iVar1 = FUN_361905c0(this_00,in_stack_00000008);
  *(undefined4 *)(iVar1 + 0x28) = local_c;
  *(undefined4 *)(iVar1 + 0x2c) = local_8;
  *(undefined4 *)(iVar1 + 0x30) = local_4;
  iVar1 = FUN_361905c0(this_00,in_stack_00000008);
  uVar8 = *(undefined4 *)(iVar1 + 0x60);
  iVar1 = FUN_361905c0(this_00,in_stack_00000008);
  uVar10 = *(undefined4 *)(iVar1 + 0x68);
  iVar1 = FUN_361905c0(this_00,in_stack_00000008);
  uVar12 = *(undefined4 *)(iVar1 + 0x6c);
  iVar1 = FUN_361905c0(this_00,in_stack_00000008);
  uVar13 = *(undefined4 *)(iVar1 + 0x70);
  iVar1 = FUN_361905c0(this_00,in_stack_00000008);
  uVar14 = *(undefined4 *)(iVar1 + 0x74);
  if (0 < in_stack_00000008) {
    iVar1 = FUN_361905c0(this_00,in_stack_00000008 + -1);
    iVar2 = FUN_361905c0(this_00,in_stack_00000008);
    uVar6 = *(undefined4 *)(iVar2 + 100);
    uVar5 = *(undefined4 *)(iVar1 + 4);
    uVar7 = *(undefined4 *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    uVar11 = uVar8;
    pCVar3 = (CDynParticle *)FUN_361905c0(this_00,in_stack_00000008);
    CDynParticle::AddSpringForce(pCVar3,uVar5,uVar7,uVar9,uVar11,uVar6);
  }
  iVar1 = FUN_36190440((int)this_00);
  if (in_stack_00000008 < iVar1 + -1) {
    iVar1 = FUN_361905c0(this_00,in_stack_00000008 + 1);
    uVar6 = *(undefined4 *)(iVar1 + 4);
    uVar5 = *(undefined4 *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    pCVar3 = (CDynParticle *)FUN_361905c0(this_00,in_stack_00000008);
    CDynParticle::AddSpringForce(pCVar3,uVar6,uVar5,uVar7,uVar8,uVar10);
  }
  if (0 < in_stack_00000008) {
    if (in_stack_00000008 == 1) {
      iVar1 = FUN_361905c0(this_00,0);
      iVar2 = FUN_361905c0(this_00,0);
      pwGetEqSpringPosition
                (&local_c,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                 *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(this + 0x24),
                 *(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x2c),
                 *(undefined4 *)(iVar2 + 0x5c));
    }
    else {
      iVar1 = FUN_361905c0(this_00,in_stack_00000008 + -2);
      iVar2 = FUN_361905c0(this_00,in_stack_00000008 + -1);
      iVar4 = FUN_361905c0(this_00,in_stack_00000008 + -1);
      pwGetEqSpringPosition
                (&local_c,*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                 *(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                 *(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar4 + 0x5c));
    }
    uVar5 = 0;
    uVar8 = local_c;
    uVar10 = local_8;
    uVar6 = local_4;
    pCVar3 = (CDynParticle *)FUN_361905c0(this_00,in_stack_00000008);
    CDynParticle::AddSpringForce(pCVar3,uVar8,uVar10,uVar6,uVar12,uVar5);
    iVar1 = FUN_361905c0(this_00,in_stack_00000008 + -1);
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    uVar10 = *(undefined4 *)(iVar1 + 0x14);
    uVar12 = *(undefined4 *)(iVar1 + 0x18);
    uVar6 = uVar13;
    pCVar3 = (CDynParticle *)FUN_361905c0(this_00,in_stack_00000008);
    CDynParticle::AddDampingForce(pCVar3,uVar8,uVar10,uVar12,uVar6);
  }
  iVar1 = FUN_36190440((int)this_00);
  if (in_stack_00000008 < iVar1 + -1) {
    iVar1 = FUN_361905c0(this_00,in_stack_00000008 + 1);
    uVar8 = *(undefined4 *)(iVar1 + 0x10);
    uVar10 = *(undefined4 *)(iVar1 + 0x14);
    uVar12 = *(undefined4 *)(iVar1 + 0x18);
    pCVar3 = (CDynParticle *)FUN_361905c0(this_00,in_stack_00000008);
    CDynParticle::AddDampingForce(pCVar3,uVar8,uVar10,uVar12,uVar13);
  }
  local_c = 0;
  uVar8 = 0;
  local_8 = 0;
  uVar10 = 0;
  local_4 = 0;
  uVar12 = 0;
  pCVar3 = (CDynParticle *)FUN_361905c0(this_00,in_stack_00000008);
  CDynParticle::AddDampingForce(pCVar3,uVar8,uVar10,uVar12,uVar14);
  fVar15 = *(float *)(this + 8);
  pCVar3 = (CDynParticle *)FUN_361905c0(this_00,in_stack_00000008);
  CDynParticle::AddGravityForce(pCVar3,fVar15);
  iVar1 = FUN_361905c0(this_00,in_stack_00000008);
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x28);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x2c);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 0x30);
  return;
}

