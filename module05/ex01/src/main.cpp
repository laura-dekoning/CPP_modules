#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	std::cout << "\n===== Valid Form =====\n";
	try
	{
		Bureaucrat laura("Laura", 50);
		Form contract("Contract", 75, 50);

		std::cout << laura << std::endl;
		std::cout << contract << std::endl;

		laura.signForm(contract);

		std::cout << contract << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n===== Grade Too Low =====\n";
	try
	{
		Bureaucrat karen("Karen", 100);
		Form form("Form", 50, 25);

		std::cout << karen << std::endl;
		std::cout << form << std::endl;

		karen.signForm(form);

		std::cout << form << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n===== Invalid Form (Grade Too High) =====\n";
	try
	{
		Form invalid("InvalidHigh", 0, 10);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n===== Invalid Form (Grade Too Low) =====\n";
	try
	{
		Form invalid("InvalidLow", 151, 10);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}