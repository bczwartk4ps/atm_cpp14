#ifndef BASE_DISPLAY_HXX
#define BASE_DISPLAY_HXX

#include <string>

enum class UserRequest;

class BaseDisplay
{

    public:
        enum DisplayType {UNKNOWN, SECURE};

		// C++11/14: noexcept specifier
        BaseDisplay() noexcept {};
        ~BaseDisplay() noexcept {};

        virtual void showInfoToUser(const char* message) const;
        virtual void showBalance(double balance) const;
        virtual void showTransaction(UserRequest request, double amount) const;
        virtual enum DisplayType getType();
        virtual void logError(std::string msg);
};

#endif // BASE_DISPLAY_HXX
