
/* public: void __thiscall CAnimObject::LastFrame(void) */

void __thiscall CAnimObject::LastFrame(CAnimObject *this)

{
  int iVar1;
  float fVar2;
  
                    /* 0x200c0  2527  ?LastFrame@CAnimObject@@QAEXXZ */
  iVar1 = *(int *)(this + 8);
  fVar2 = GetAnimLength(this,iVar1);
  SelectFrameInTime(this,fVar2 - *(float *)(*(int *)(*(int *)(this + 0x14) + 0x18) + 0x20 +
                                           iVar1 * 0x2c));
  return;
}

