
#ifndef DESIGN_PATTERNS_LOCK_HPP
#define DESIGN_PATTERNS_LOCK_HPP

#include "mutex.hpp"

namespace design_patterns::creational::singleton
{

/* Place holder for thread synchronization lock */
class lock
{
public:
    lock(mutex& m) : mutex_(m) { /* placeholder code to acquire the mutex */ }
    ~lock() { /* placeholder code to release the mutex */ }
private:
    mutex & mutex_;
};

} // end namespace design_patterns::creational::singleton


#endif /* DESIGN_PATTERNS_LOCK_HPP */
