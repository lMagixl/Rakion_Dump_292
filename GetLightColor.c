
/* public: unsigned long __thiscall CLightSource::GetLightColor(void)const  */

ulong __thiscall CLightSource::GetLightColor(CLightSource *this)

{
  undefined4 uStack_4;
  
                    /* 0x1486b0  1945  ?GetLightColor@CLightSource@@QBEKXZ */
  if (*(int *)(this + 0x44) == 0) {
    return *(ulong *)(this + 0x28);
  }
  uStack_4 = this;
  GetLightColor(this,(uchar *)((int)&uStack_4 + 1),(uchar *)((int)&uStack_4 + 2),
                (uchar *)((int)&uStack_4 + 3));
  return (uint)CONCAT21(CONCAT11(uStack_4._1_1_,uStack_4._2_1_),uStack_4._3_1_) << 8;
}

