
/* public: void __thiscall CLightSource::SetLightSourceWithNoDiscarding(class CLightSource const &)
    */

void __thiscall
CLightSource::SetLightSourceWithNoDiscarding(CLightSource *this,CLightSource *param_1)

{
                    /* 0x1483e0  3499  ?SetLightSourceWithNoDiscarding@CLightSource@@QAEXABV1@@Z */
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(uint *)(this + 0x28) = *(uint *)(param_1 + 0x28) & 0xffffff00;
  *(uint *)(this + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffff00;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  this[0x34] = param_1[0x34];
  this[0x35] = param_1[0x35];
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  return;
}

