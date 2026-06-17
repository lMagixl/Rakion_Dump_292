
/* public: void __thiscall CDynParticle::Initialize(float,class Vector<float,3>,class
   Vector<float,3>) */

void __thiscall
CDynParticle::Initialize
          (CDynParticle *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
                    /* 0x18d2b0  2329  ?Initialize@CDynParticle@@QAEXMV?$Vector@M$02@@0@Z */
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x14) = param_7;
  *(undefined4 *)(this + 0x18) = param_8;
  return;
}

