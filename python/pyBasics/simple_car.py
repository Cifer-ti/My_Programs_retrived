running = False
while True:
    command = input("> ")

    if command.lower() == "help":
        print("""
start - to start the car
stop - to stop the car
quit - to exit
        """)
    elif command.lower() == "start":
        if not running:
            print("Car started...Ready to go1")
            running = True
        else:
            print("Car already running.")

    elif command.lower() == "stop":
        if running:
            print("Car stopped.")
            running = False
        else:
            print("Car is already stopped")

    elif command.lower() == "quit":
        print("Okay exiting")
        break
    else:
        print("I don't understand that...")
