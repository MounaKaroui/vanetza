#include <vanetza/common/runtime.hpp>
#include <vanetza/dcc/no_rate_control.hpp>
#include <vanetza/dcc/state_machine.hpp>
#include <stdexcept>

namespace vanetza
{
  namespace dcc
  {

    NoRateControl::NoRateControl(const StateMachine& fsm, const Runtime& rt) :
        m_burst_budget(rt), m_fsm_budget(fsm, rt), m_fsm(fsm)
    {
    }

    Clock::duration NoRateControl::delay(const Transmission& tx)
    {
        return vanetza::Clock::duration::zero();
    }

    Clock::duration NoRateControl::interval(const Transmission& tx)
    {
        return vanetza::Clock::duration::zero();
    }

    void NoRateControl::notify(const Transmission& tx)
    {
    }

  } // namespace dcc
} // namespace vanetza
