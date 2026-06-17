
/* public: int __thiscall CAnyProjection3D::IsPerspective(void) */

int __thiscall CAnyProjection3D::IsPerspective(CAnyProjection3D *this)

{
                    /* 0x3930  2443  ?IsPerspective@CAnyProjection3D@@QAEHXZ */
  return (uint)(*(CAnyProjection3D **)(this + 0x658) == this + 0x30c);
}

