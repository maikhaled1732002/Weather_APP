Weather Forecast Application

This project is a weather forecast application developed using C++ and the Qt framework. It fetches weather data from the Open-Meteo API, processes the data, and displays temperature trends (max and min) on a graphical chart. The application also allows users to select a city and view the current weather.
Features

    Weather Data Fetching: Fetches daily weather data (max and min temperatures) from the Open-Meteo API.
    Graphical Display: Displays max and min temperature trends in a line chart using Qt's QChart and QLineSeries.
    City Selection: Allows users to select a city from a dropdown to fetch its weather forecast.
    Current Weather Display: Displays the current temperature and date for the selected city.

Technologies Used

    C++: Main programming language.
    Qt Framework: Used for the GUI and charting functionality.
    Qt Designer: Used to design the UI.
    CURL: For making HTTP requests to the Open-Meteo API.
    RapidJSON: For parsing the JSON data from the API.

Project Structure

    MainWindow.cpp: The core file where the UI and event handling take place.
    Cities.cpp: Contains city coordinates and allows adding new cities.
    Curl.cpp: Handles making requests to the Open-Meteo API and retrieving weather data.
    Data.cpp: Manages the response from the API and provides data to the next stage.
    RapidJson.cpp: Parses the JSON data and formats it for display.

Prerequisites

Before running the application, you need the following installed:

    Qt Framework (including Qt Creator).
    C++ Compiler: Ensure your development environment has a C++ compiler installed (e.g., GCC or MSVC).
    CURL: Required for making HTTP requests.
    RapidJSON: Required for parsing the JSON responses.

Setup Instructions

    Clone the repository:

git clone https://github.com/maikhaled1732002/Weather_APP.git

cd Weather_APP

Install dependencies: Make sure Qt, CURL, and RapidJSON are installed on your system.

Open the project:

    You can use Qt Creator to open the .pro file and configure the project.
    Alternatively, you can open the project in VS Code and use the terminal to compile and run it.

Build the project: In Qt Creator, click on the build button to compile the project.

If you're using VS Code, you may need to configure a build system or use a CMake configuration to compile the application.

Run the application: After building the project, you can run the application from Qt Creator or the terminal:

    ./Weather_APP

Usage

    Select City: Use the dropdown menu in the UI to select a city (e.g., Cairo, Alexandria, Luxor).
    Fetch Forecast: Click the "Click to show " button to fetch and display the weather forecast for the selected city.
    View Chart: The forecast (max and min temperatures) will be shown in a line chart.
    Current Weather: The current temperature and date for the selected city will be displayed.
