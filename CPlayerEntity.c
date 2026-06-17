
/* public: __thiscall CPlayerEntity::CPlayerEntity(class CPlayerEntity const &) */

CPlayerEntity * __thiscall CPlayerEntity::CPlayerEntity(CPlayerEntity *this,CPlayerEntity *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xa77b0  197  ??0CPlayerEntity@@QAE@ABV0@@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362132f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CMovableEntity::CMovableEntity((CMovableEntity *)this,(CMovableEntity *)param_1);
  *(undefined ***)this = &CMovableModelEntity::_vftable_;
  *(undefined4 *)(this + 0x35c) = *(undefined4 *)(param_1 + 0x35c);
  *(undefined4 *)(this + 0x360) = *(undefined4 *)(param_1 + 0x360);
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  *(undefined4 *)(this + 0x364) = *(undefined4 *)(param_1 + 0x364);
  CPlayerCharacter::CPlayerCharacter
            ((CPlayerCharacter *)(this + 0x368),(CPlayerCharacter *)(param_1 + 0x368));
  *(undefined4 *)(this + 0x3ac) = *(undefined4 *)(param_1 + 0x3ac);
  *(undefined4 *)(this + 0x3b0) = *(undefined4 *)(param_1 + 0x3b0);
  *(undefined4 *)(this + 0x3b4) = *(undefined4 *)(param_1 + 0x3b4);
  *(undefined4 *)(this + 0x3b8) = *(undefined4 *)(param_1 + 0x3b8);
  *(undefined4 *)(this + 0x3bc) = *(undefined4 *)(param_1 + 0x3bc);
  *(undefined4 *)(this + 0x3c0) = *(undefined4 *)(param_1 + 0x3c0);
  *(undefined4 *)(this + 0x3c4) = *(undefined4 *)(param_1 + 0x3c4);
  *(undefined4 *)(this + 0x3c8) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined4 *)(this + 0x3cc) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined4 *)(this + 0x3d0) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(this + 0x3d4) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(this + 0x3d8) = *(undefined4 *)(param_1 + 0x3d8);
  ExceptionList = local_c;
  return this;
}

