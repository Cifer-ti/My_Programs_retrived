alien_0 = {'x_position': 0, 'y_position': 25, 'speed': 'medium'}
print("Original x position: " + str(alien_0['x_position']))

if alien_0['speed'] == 'slow':
    x_increment = 1

elif alien_0['speed'] == 'medium':
    x_increment = 2

else:
    x_increment = 3

alien_0['x_position'] = alien_0['x_position'] + x_increment

print("New x position: " + str(alien_0['x_position']))

favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}

print("Sarah's favorite programming language is " + favorite_languages['jen'].title() + ".")

for name, language in favorite_languages.items():
    print(name.title() + "'s favorite programming language is " + language.title() + ".")

friends = ['phil', 'sarah']

for name in favorite_languages.keys():
    print(name.title())

    if name in friends:
        print("\nHey " + name.title() +
              " I see your favorite programming language is " + favorite_languages[name].title())

print("\nThe following languages have been mentioned")
for values in set(favorite_languages.values()):
    print(values.title())
