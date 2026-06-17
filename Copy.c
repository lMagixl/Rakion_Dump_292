
/* public: virtual void __thiscall CPlayerEntity::Copy(class CEntity &,unsigned long) */

void __thiscall CPlayerEntity::Copy(CPlayerEntity *this,CEntity *param_1,ulong param_2)

{
                    /* 0x1b6f10  1377  ?Copy@CPlayerEntity@@UAEXAAVCEntity@@K@Z */
  CMovableEntity::Copy((CMovableEntity *)this,param_1,param_2);
  CPlayerCharacter::operator=
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
  return;
}

