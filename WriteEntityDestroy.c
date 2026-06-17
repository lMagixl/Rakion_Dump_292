
/* public: void __thiscall CEntityMessage::WriteEntityDestroy(unsigned long &) */

void __thiscall CEntityMessage::WriteEntityDestroy(CEntityMessage *this,ulong *param_1)

{
                    /* 0x1007d0  3963  ?WriteEntityDestroy@CEntityMessage@@QAEXAAK@Z */
  CNetworkMessage::Reinit((CNetworkMessage *)(this + 4));
  *(undefined4 *)this = 4;
  *(undefined2 *)(this + 0x1c) = 0;
  *(ulong *)(this + 0x20) = *param_1;
  if (DAT_362cced0 != 0) {
    CPrintF(s_Server__DESTROY__EntityID__0x_X_36235e38,*param_1);
  }
  return;
}

