
/* public: void __thiscall CPonytail::CalculateMotion(float,long) */

void __thiscall CPonytail::CalculateMotion(CPonytail *this,float param_1,long param_2)

{
  CPonytail *this_00;
  float fVar1;
  int iVar2;
  CDynParticle *this_01;
  int iVar3;
  float fVar4;
  undefined1 local_c [12];
  
                    /* 0x190220  1133  ?CalculateMotion@CPonytail@@QAEXMJ@Z */
  fVar1 = (float)param_2;
  if (0 < param_2) {
    this_00 = this + 0xc;
    do {
      iVar3 = 0;
      iVar2 = FUN_36190440((int)this_00);
      if (0 < iVar2) {
        do {
          if (iVar3 != 0) {
            CalculateForce_CP(this,(long)local_c);
            fVar4 = param_1 / fVar1;
            this_01 = (CDynParticle *)FUN_361905c0(this_00,iVar3);
            CDynParticle::CalculateMotion(this_01,fVar4);
            RevisePosition(this,iVar3);
            HandleCollision_CP(this,iVar3,param_1 / fVar1);
          }
          iVar3 = iVar3 + 1;
          iVar2 = FUN_36190440((int)this_00);
        } while (iVar3 < iVar2);
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  iVar3 = 0;
  iVar2 = FUN_36190440((int)(this + 0xc));
  if (0 < iVar2) {
    do {
      BuildRenderBoneAixis_CP(this,iVar3);
      iVar3 = iVar3 + 1;
      iVar2 = FUN_36190440((int)(this + 0xc));
    } while (iVar3 < iVar2);
  }
  return;
}

