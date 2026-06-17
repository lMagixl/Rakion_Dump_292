
/* public: unsigned long __thiscall CLightSource::GetLightAmbient(void)const  */

ulong __thiscall CLightSource::GetLightAmbient(CLightSource *this)

{
  undefined4 uStack_4;
  
                    /* 0x1486f0  1943  ?GetLightAmbient@CLightSource@@QBEKXZ */
  if (*(int *)(this + 0x48) == 0) {
    return *(ulong *)(this + 0x2c);
  }
  uStack_4 = this;
  GetLightAmbient(this,(uchar *)((int)&uStack_4 + 1),(uchar *)((int)&uStack_4 + 2),
                  (uchar *)((int)&uStack_4 + 3));
  return (uint)CONCAT21(CONCAT11(uStack_4._1_1_,uStack_4._2_1_),uStack_4._3_1_) << 8;
}

