
/* public: void __thiscall CKeyCommand::AddKeyCmd(long) */

void __thiscall CKeyCommand::AddKeyCmd(CKeyCommand *this,long param_1)

{
                    /* 0x18dca0  985  ?AddKeyCmd@CKeyCommand@@QAEXJ@Z */
  *(uint *)this = *(uint *)this | param_1;
  return;
}

