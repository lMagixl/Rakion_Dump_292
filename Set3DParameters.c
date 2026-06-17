
/* public: void __thiscall CSoundObject::Set3DParameters(float,float,float,float,int) */

void __thiscall
CSoundObject::Set3DParameters
          (CSoundObject *this,float param_1,float param_2,float param_3,float param_4,int param_5)

{
                    /* 0x329f0  3387  ?Set3DParameters@CSoundObject@@QAEXMMMMH@Z */
  SetVolume(this,param_3,param_5);
  SetPitch(this,param_4,param_5);
  SetRange(this,param_2,param_1,param_5);
  return;
}

