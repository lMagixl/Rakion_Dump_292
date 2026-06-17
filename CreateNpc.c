
/* public: class CEntity * __thiscall CWorld::CreateNpc(class CPlacement3D const &,class
   CEntityClass *,unsigned long,int) */

CEntity * __thiscall
CWorld::CreateNpc(CWorld *this,CPlacement3D *param_1,CEntityClass *param_2,ulong param_3,int param_4
                 )

{
  byte bVar1;
  int iVar2;
  CEntity *this_00;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  
                    /* 0xc9480  1426
                       ?CreateNpc@CWorld@@QAEPAVCEntity@@ABVCPlacement3D@@PAVCEntityClass@@KH@Z */
  if ((*(int *)(this + 0x30) == 0) &&
     (iVar2 = _stricmp(*(char **)(*(int *)(param_2 + 0x20) + 0x20),s_WorldBase_36231e94), iVar2 == 0
     )) {
    *(CEntityClass **)(this + 0x30) = param_2;
    if (*(code **)(*(int *)(param_2 + 0x20) + 0x40) != (code *)0x0) {
      (**(code **)(*(int *)(param_2 + 0x20) + 0x40))(this);
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
  *(undefined4 *)(this_00 + 0xfc) = 2;
  if (param_4 == 0) {
    *(uint *)(this_00 + 0x10) = *(uint *)(this_00 + 0x10) | 0x10000000;
    return this_00;
  }
  bVar1 = *(byte *)(*(int *)(_pNetwork + 0x24) + 0x2946);
  uVar4 = (uint)bVar1;
  uVar3 = 0;
  piVar5 = (int *)(*(int *)(_pNetwork + 0x24) + 0x1d70 + uVar4 * 0x24);
  do {
    if (*piVar5 == -1) {
      *(char *)(*(int *)(_pNetwork + 0x24) + 0x2947 + uVar4) =
           *(char *)(*(int *)(_pNetwork + 0x24) + 0x2947 + uVar4) + '\x01';
      param_2 = (CEntityClass *)(uVar3 & 0xff);
      *(undefined4 *)(*(int *)(_pNetwork + 0x24) + 0x1d70 + (uVar4 * 9 + (uVar3 & 0xff)) * 4) =
           *(undefined4 *)(this_00 + 0x1c);
      break;
    }
    uVar3 = uVar3 + 1;
    piVar5 = piVar5 + 1;
  } while ((int)uVar3 < 9);
  CMovableEntity::SetEntityIdIndex((CMovableEntity *)this_00,bVar1,(uchar)param_2);
  return this_00;
}

