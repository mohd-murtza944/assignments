class AeroPlane {
	public void takeOff() 
	{
		System.out.println("plane have take off");
	}
	public void fly() 
	{
		System.out.println("plane will be flying soon ");
	}
}
	class cargoPlanes extends AeroPlane {
		public void takeoff() {
			System.out.println("cargoplanes requires more time to take off ");
		}
		public void fly() {
			System.out.println("it has lower capability of flying ");
		}	
	}
 class PassengerPlane extends AeroPlane {
		public void takeOff() {
			System.out.println("it takes medium time ");
		}
		public void fly() {
			System.out.println("it has medium capabilities to fly");
		}
	}
 class airPort{
	 public void poly (AeroPlane ref) {
		 ref.takeOff();
		 ref.fly();
		 System.out.println("................................");
	 }
 }
 
  class launchPoly{
	 public static void main (String[] args) {
		 cargoPlanes cp = new cargoPlanes();
		 PassengerPlane pp= new PassengerPlane();
		 airPort a = new airPort(); 
		 a.poly(cp);
		 a.poly(pp);
	 }
	 
 }
