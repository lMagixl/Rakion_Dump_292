
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: __thiscall CCastRay::CCastRay(class CEntity *,class Vector<float,3> const &,class
   Vector<float,3> const &) */

CCastRay * __thiscall
CCastRay::CCastRay(CCastRay *this,CEntity *param_1,Vector<float,3> *param_2,Vector<float,3> *param_3
                  )

{
                    /* 0xdc430  53  ??0CCastRay@@QAE@PAVCEntity@@ABV?$Vector@M$02@@1@Z */
  Init(this,param_1,param_2,param_3);
  *(float *)(this + 0x94) =
       SQRT((*(float *)(this + 0x38) - *(float *)(this + 0x2c)) *
            (*(float *)(this + 0x38) - *(float *)(this + 0x2c)) +
            (*(float *)(this + 0x3c) - *(float *)(this + 0x30)) *
            (*(float *)(this + 0x3c) - *(float *)(this + 0x30)) +
            (*(float *)(this + 0x40) - *(float *)(this + 0x34)) *
            (*(float *)(this + 0x40) - *(float *)(this + 0x34))) + _DAT_362287b0;
  return this;
}

