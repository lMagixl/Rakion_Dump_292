
/* public: class CEntity * __thiscall CWorld::CreateMapNpc(class CPlacement3D const &,class
   CEntityClass *,unsigned long,int) */

CEntity * __thiscall
CWorld::CreateMapNpc
          (CWorld *this,CPlacement3D *param_1,CEntityClass *param_2,ulong param_3,int param_4)

{
  int iVar1;
  CEntity *this_00;
  int *piVar2;
  
                    /* 0xc95f0  1419
                       ?CreateMapNpc@CWorld@@QAEPAVCEntity@@ABVCPlacement3D@@PAVCEntityClass@@KH@Z
                        */
  if (*(int *)(this + 0x30) == 0) {
    iVar1 = _stricmp(*(char **)(*(int *)(param_2 + 0x20) + 0x20),s_WorldBase_36231ea0);
    if (iVar1 == 0) {
      *(CEntityClass **)(this + 0x30) = param_2;
      if (*(code **)(*(int *)(param_2 + 0x20) + 0x40) != (code *)0x0) {
        (**(code **)(*(int *)(param_2 + 0x20) + 0x40))(this);
      }
    }
  }
  (**(code **)(*(int *)param_2 + 0x1c))();
  this_00 = CEntityClass::New(param_2);
  if (this_00 != (CEntity *)0x0) {
    *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 1;
  }
  *(CWorld **)(this_00 + 0xa8) = this;
  FUN_360ccb70(this + 0x15c,this_00);
  FUN_360ccb70(this + 0x3c,this_00);
  if (param_3 == 0xffffffff) {
    *(undefined4 *)(this_00 + 0x1c) = *(undefined4 *)(this + 0x130);
    *(int *)(this + 0x130) = *(int *)(this + 0x130) + 1;
  }
  else {
    *(ulong *)(this_00 + 0x1c) = param_3;
  }
  FUN_360d8450(this + 0x4c,(int)this_00);
  *(undefined4 *)(this_00 + 0x3c) = *(undefined4 *)param_1;
  *(undefined4 *)(this_00 + 0x40) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this_00 + 0x44) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this_00 + 0x48) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this_00 + 0x4c) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this_00 + 0x50) = *(undefined4 *)(param_1 + 0x14);
  MakeRotationMatrixFast((Matrix<float,3,3> *)(this_00 + 0x54),(Vector<float,3> *)(this_00 + 0x48));
  *(undefined4 *)(this_00 + 0xfc) = 3;
  if (param_4 != 0) {
    iVar1 = 0;
    piVar2 = (int *)(*(int *)(_pNetwork + 0x24) + 0x2048);
    do {
      if (*piVar2 == -1) {
        *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x2048 + iVar1 * 4) =
             *(undefined4 *)(this_00 + 0x1c);
        CMovableEntity::SetEntityIdIndex((CMovableEntity *)this_00,'\x14',(uchar)iVar1);
        *(char *)(*(int *)(_pNetwork + 0x24) + 0x214c) =
             *(char *)(*(int *)(_pNetwork + 0x24) + 0x214c) + '\x01';
        return this_00;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < 0x41);
    return this_00;
  }
  *(uint *)(this_00 + 0x10) = *(uint *)(this_00 + 0x10) | 0x10000000;
  return this_00;
}

