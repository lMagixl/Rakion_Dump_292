
void __thiscall FUN_36117fb0(void *this,int param_1)

{
  void *this_00;
  int *piVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  CDrawPort *pCVar6;
  CAnyProjection3D *pCVar7;
  
  if (DAT_362cce78 != 0) {
    DAT_362a4188 = 1;
  }
  if ((*(int *)((int)this + 0xd40) == 0) && (DAT_362a4188 != 0)) {
    if (param_1 == 0) {
      pCVar6 = *(CDrawPort **)((int)this + 8);
      pCVar7 = (CAnyProjection3D *)((int)this + 0x3c);
    }
    else {
      pCVar6 = *(CDrawPort **)((int)this + 8);
      pCVar7 = (CAnyProjection3D *)((int)this + 0x6c8);
    }
    Particle_PrepareSystem(pCVar6,pCVar7);
    this_00 = (void *)((int)this + 0xdb0);
    iVar5 = 0;
    iVar4 = FUN_3611f3f0((int)this_00);
    if (0 < iVar4) {
      do {
        iVar4 = FUN_3611fde0(this_00,iVar5);
        piVar1 = *(int **)(iVar4 + 0xc);
        uVar2 = piVar1[4];
        if ((uVar2 & 0x10000) == 0) {
          if ((*(int *)((int)this + 0x6c0) == 0) || ((uVar2 & 0x200) == 0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((param_1 == 0) == !bVar3) {
            uVar2 = *(uint *)(iVar4 + 8);
            Particle_PrepareEntity
                      (*(float *)(iVar4 + 4),uVar2 & 4,uVar2 & 8,uVar2 & 0x20,
                       *(CEntity **)((int)this + 0x34));
            (**(code **)(*piVar1 + 0x128))();
            DAT_362bf9c8 = 0;
          }
        }
        iVar5 = iVar5 + 1;
        iVar4 = FUN_3611f3f0((int)this_00);
      } while (iVar5 < iVar4);
    }
    Particle_EndSystem(0);
  }
  return;
}

