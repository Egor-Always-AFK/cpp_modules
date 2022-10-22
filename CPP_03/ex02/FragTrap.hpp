#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &cpy);

        virtual ~FragTrap();

        FragTrap &operator=(const FragTrap &src);

        void highFiveGuys(void);
};