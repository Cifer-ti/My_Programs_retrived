responses = {}

polling_active = True

while polling_active:
    name = input("\nWhat's your name ? ")
    response = input("Which mountain will you like to climb someday ? ")

    responses[name] = response

    repeat = input("Will you like to end the poll or let someone else take a poll ? (yes/no): ")

    if str(repeat).lower() == 'no':
        polling_active = False
        print("End of poll")
    else:
        print("Poll continues...")

print("\n--- Poll Results ---")
for name, mountain in responses.items():
    print(name.title() + " would like to climb Mount " + mountain.title() + ".")
