
#ifndef DESIGN_PATTERNS_SINGLETON_HPP
#define DESIGN_PATTERNS_SINGLETON_HPP

namespace design_patterns::creational::singleton
{

class singleton
{
public:
    static singleton* GetInstance();
    int a;
    ~singleton();

private:
    singleton(int _a);

    static mutex mutex_;

    // Not defined, to prevent copying
    singleton(const singleton& );
    singleton& operator =(const singleton& other);
};

} // end namespace design_patterns::creational::singleton

#endif /* DESIGN_PATTERNS_SINGLETON_HPP */
