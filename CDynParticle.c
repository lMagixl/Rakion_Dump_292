
/* public: __thiscall CDynParticle::CDynParticle(float,class Vector<float,3>,class Vector<float,3>)
    */

void __thiscall
CDynParticle::CDynParticle
          (CDynParticle *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
                    /* 0x18da60  78  ??0CDynParticle@@QAE@MV?$Vector@M$02@@0@Z */
  *(undefined4 *)this = param_1;
  *(undefined4 *)(this + 4) = param_3;
  *(undefined4 *)(this + 8) = param_4;
  *(undefined4 *)(this + 0xc) = param_5;
  *(undefined4 *)(this + 0x10) = param_6;
  *(undefined4 *)(this + 0x14) = param_7;
  *(undefined4 *)(this + 0x18) = param_8;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}

