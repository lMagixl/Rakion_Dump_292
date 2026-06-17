
/* public: virtual class Vector<float,3> __thiscall CEntity::GetAngle(void) */

void __thiscall CEntity::GetAngle(CEntity *this)

{
  int iVar1;
  undefined4 *unaff_retaddr;
  undefined1 local_18 [24];
  
                    /* 0x124ad0  1700  ?GetAngle@CEntity@@UAE?AV?$Vector@M$02@@XZ */
  iVar1 = (**(code **)(*(int *)this + 100))(local_18);
  *unaff_retaddr = *(undefined4 *)(iVar1 + 0xc);
  unaff_retaddr[1] = *(undefined4 *)(iVar1 + 0x10);
  unaff_retaddr[2] = *(undefined4 *)(iVar1 + 0x14);
  return;
}

