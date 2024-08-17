def print_models(unprinted_designs_list, completed_models_list):
    """
    Simulate printing printing each device until none are left
    Move design after printing into completed_model
    """

    while unprinted_designs_list:
        current_design = unprinted_designs_list.pop()

        # simulate printing a device
        print("Printing model: " + current_design)

        completed_models_list.append(current_design)


def show_completed_models(completed_models_list):
    """ show all models that where printed """

    print("\nThe following models have been printed")
    for model in completed_models_list:
        print(model)


unprinted_designs = ['iphone case', 'robot pendant', 'dodecahedron']
completed_models = []

print_models(unprinted_designs, completed_models)
show_completed_models(completed_models)
