import java.util.concurrent.Executor;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

// making a thread sleep to make more predicatble

class PredictableSleep {
	public static void main(String[] args) {
		ExecutorService executor = Executors.newSingleThreadExecutor();

		executor.execute(() -> sleepThenPrint());

		System.out.println("back in main");
		executor.shutdown();
	}

	public static void sleepThenPrint() {
		try {
			TimeUnit.SECONDS.sleep(2);
		} catch(InterruptedException e) {
			e.printStackTrace();
		}

		System.out.println("top o' the stack");
	}
}
