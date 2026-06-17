
/* public: __thiscall CEntityComponent::CEntityComponent(class CEntityComponent const &) */

CEntityComponent * __thiscall
CEntityComponent::CEntityComponent(CEntityComponent *this,CEntityComponent *param_1)

{
  char *pcVar1;
  
                    /* 0x74c0  88  ??0CEntityComponent@@QAE@ABV0@@Z */
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  pcVar1 = StringDuplicate(*(char **)(param_1 + 0xc));
  *(char **)(this + 0xc) = pcVar1;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return this;
}

